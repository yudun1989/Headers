//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, QQAsynUrlImageView, UILabel, UserSummaryCoverModel;

@interface UserSummaryCoverView : UIView
{
    long long _uin;
    QQAsynUrlImageView *_imageView;
    UILabel *_remindLabel;
    UserSummaryCoverModel *_coverModel;
    NSString *_lastUsedUrl;
    UIView *_maskView;
}

- (void).cxx_destruct;
- (void)updateImage:(id)arg1;
- (void)updateUin:(long long)arg1;
- (void)hiddenRemindLabel;
- (void)showRemindLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 uin:(long long)arg2;

@end

