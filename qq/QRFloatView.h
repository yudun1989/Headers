//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;

@interface QRFloatView : UIView
{
    NSString *_chapterText;
    NSString *_percentText;
    UIButton *_revokeButton;
    int _xo;
    UILabel *_chapterLabel;
    UILabel *_percentLabel;
    UIView *_divideLine;
    UIImageView *_backgroundImageView;
    _Bool _showRevokeButton;
}

- (void).cxx_destruct;
- (double)widthOfPercentLabel:(id)arg1;
- (double)widthOfChapterLabel:(id)arg1;
- (void)showRevokeBtn:(_Bool)arg1;
- (void)layoutFloatViewIfNeeded:(double)arg1;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @dynamic backgroundImageView;
@property(retain, nonatomic) UIButton *revokeButton; // @dynamic revokeButton;
@property(retain, nonatomic) UIView *divideLine; // @dynamic divideLine;
@property(retain, nonatomic) UILabel *percentLabel; // @dynamic percentLabel;
@property(retain, nonatomic) UILabel *chapterLabel; // @dynamic chapterLabel;
- (void)showWithOffset:(double)arg1;
- (void)showWithOffset:(double)arg1 revokeBtnShow:(_Bool)arg2;

// Remaining properties
@property(retain, nonatomic) NSString *chapterText; // @dynamic chapterText;
@property(retain, nonatomic) NSString *percentText; // @dynamic percentText;
@property(nonatomic) _Bool showRevokeButton; // @dynamic showRevokeButton;

@end

