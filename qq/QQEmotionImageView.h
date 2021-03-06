//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString, ParseRange, QQAPNGImageView;

@interface QQEmotionImageView : UIImageView
{
    NSString *_urlKey;
    ParseRange *_parseRange;
    QQAPNGImageView *_apngImageView;
    _Bool _animated;
    _Bool _isQQEmotion;
    NSString *_emojiStr;
}

@property(retain, nonatomic) NSString *emojiStr; // @synthesize emojiStr=_emojiStr;
@property(nonatomic) _Bool isQQEmotion; // @synthesize isQQEmotion=_isQQEmotion;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(retain, nonatomic) ParseRange *parseRange; // @synthesize parseRange=_parseRange;
@property(retain, nonatomic) NSString *urlKey; // @synthesize urlKey=_urlKey;
- (void)handleGifDecodeNotification:(id)arg1;
- (void)loadGif;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

