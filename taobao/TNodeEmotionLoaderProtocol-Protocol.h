//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSMutableAttributedString, NSString;

@protocol TNodeEmotionLoaderProtocol
- (void)emojiLoaderFromText:(NSString *)arg1 completionBlock:(void (^)(NSDictionary *))arg2;
- (NSMutableAttributedString *)transformFromText:(NSString *)arg1 imageBounds:(struct CGRect)arg2;
@end

