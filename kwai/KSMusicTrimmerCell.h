//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class KSLyricsLabel, UILabel;

@interface KSMusicTrimmerCell : UITableViewCell
{
    KSLyricsLabel *_lyricLabel;
    UILabel *_translateLabel;
}

+ (double)cellHeightWithLine:(id)arg1 cellWidth:(double)arg2 padding:(double)arg3;
@property(retain, nonatomic) UILabel *translateLabel; // @synthesize translateLabel=_translateLabel;
@property(retain, nonatomic) KSLyricsLabel *lyricLabel; // @synthesize lyricLabel=_lyricLabel;
- (void).cxx_destruct;
- (void)setLyric:(id)arg1 suppertWordSyn:(_Bool)arg2 trackColor:(id)arg3;
- (void)setTimestamp:(long long)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

