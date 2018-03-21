//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIColor, UIFont, UIImage;

@protocol APThemeValuePath <NSObject>
- (_Bool)definedForPathNoRecursion:(NSString *)arg1;
- (_Bool)definedForPath:(NSString *)arg1;
- (UIFont *)fontForPath:(NSString *)arg1;
- (UIImage *)imageForPath:(NSString *)arg1;
- (_Bool)boolForPath:(NSString *)arg1;
- (float)floatForPath:(NSString *)arg1;
- (long long)intForPath:(NSString *)arg1;
- (UIColor *)colorForPath:(NSString *)arg1;
- (NSString *)stringForPath:(NSString *)arg1;
@end

