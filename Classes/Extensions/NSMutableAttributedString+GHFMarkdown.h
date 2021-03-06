//
//  NSMutableAttributedString+GHFMarkdown.h
//  iOctocat
//
//  Created by Dennis Reimann on 05/15/13.
//  http://dennisreimann.de
//

#import <Foundation/Foundation.h>

@interface NSMutableAttributedString (GHFMarkdown)
- (void)substitutePattern:(NSString *)pattern andAddAttributes:(NSDictionary *)attributes;
- (void)substituteHeadlinesWithBaseFont:(UIFont *)baseFont;
@end
