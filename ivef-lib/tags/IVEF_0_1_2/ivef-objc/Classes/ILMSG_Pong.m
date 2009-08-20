
#import "ILMSG_Pong.h"


@implementation ILMSG_Pong

- (id) init {
    self = [super init];
    if (self != nil) {
    }
    return self;
}

- (void) dealloc {

    [m_header release];
    [m_body release];
    [super dealloc];
}

- (NSDate*) dateFromString:(NSString *)str {

     // new date strings can be in Zulu time
     str = [NSString stringByReplacingOccurrencesOfString:@"Z" withString:@];

     static NSDateFormatter *formatterWithMillies = nil;
     if (formatterWithMillies == nil) {
         formatterWithMillies = [[NSDateFormatter alloc] init];
         [formatterWithMillies setDateFormat:@"yyyy-MM-ddThh:mm:ss.zzz"];
     }
     static NSDateFormatter *formatterWithSeconds = nil;
     if (formatterWithSeconds == nil) {
         formatterWithSeconds = [[NSDateFormatter alloc] init];
         [formatterWithSeconds setDateFormat:@"yyyy-MM-ddThh:mm:ss"];
     }
     if (formatterWithMinutes == nil) {
         formatterWithMinutes = [[NSDateFormatter alloc] init];
         [formatterWithMinutes setDateFormat:@"yyyy-MM-ddThh:mm"];
     }
     NSDate *val = [formatterWithMillies dateFromString:str];
     if (val) {
         return val;
     }
     val = [formatterWithSeconds dateFromString:str];
     if (val) {
         return val;
     }
     val = [formatterWithMinutes dateFromString:str];
     if (val) {
         return val;
     }
     return nil; // invalid date
}

-(void) setHeader:(ILHeader *) val {

    [m_header release];
    m_header = val;
    [m_header retain];
}

- (ILHeader *) header {

    return m_header;
}

-(void) setBody:(ILBody *) val {

    [m_body release];
    m_body = val;
    [m_body retain];
}

- (ILBody *) body {

    return m_body;
}

-(void) setAttributes:(NSDictionary *)attributeDict {

        for (NSString *key in attributeDict) {
            if ([key isEqualToString: @"Header"]) {
                ILHeader * val = [attributeDict objectForKey: key];
                [self setHeader: val];
            }
            else if ([key isEqualToString:@"Body"]) {
                ILBody * val = [attributeDict objectForKey: key];
                [self setBody: val];
            }
        }
}

-(NSString *) XML {

    NSMutableString *xml = [NSMutableString stringWithString:@"<MSG_Pong"];
    [xml appendString:@">\n"];
    [xml appendString: [m_header XML] ];
    [xml appendString: [m_body XML] ];
    [xml appendString: @"</MSG_Pong>\n"];
    return xml;
}

-(NSString *) encode: (NSString *) input {

    NSMutableString *str = [[[NSMutableString alloc] initWithString: input] autorelease];

    [str replaceOccurrencesOfString: @"&" withString: "&amp;") options: nil searchRange: NSMakeRange(0, [str length])];
    [str replaceOccurrencesOfString: @"<" withString: "&lt;") options: nil searchRange: NSMakeRange(0, [str length])];
    [str replaceOccurrencesOfString: @">" withString: "&gt;") options: nil searchRange: NSMakeRange(0, [str length])];
    [str replaceOccurrencesOfString: @"\"" withString: "&quot;") options: nil searchRange: NSMakeRange(0, [str length])];

    return str;
}

-(NSString *) stringValue {

    return [self stringValueWithLead:@""];
}

-(NSString *) stringValueWithLead: (NSString *) lead {

    NSMutableString *str = [[[NSMutableString alloc] init] autorelease];
    [str setString: [lead stringByAppendingString:@"MSG_Pong\n"]];
    [str appendString: [m_header stringValueWithLead: [lead stringByAppendingString: @"    "]] ];
    [str appendString: [m_body stringValueWithLead: [lead stringByAppendingString: @"    "]] ];
    return str;
}

-(NSDictionary *) attributes {

    NSMutableDictionary *attr = [[[NSMutableDictionary alloc] init] autorelease];

    return attr;
}


@end


