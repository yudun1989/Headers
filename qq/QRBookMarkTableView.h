//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@class UIImageView, UILabel;

@interface QRBookMarkTableView : UITableView
{
    UIImageView *_bookMarkBgView;
    UILabel *_guideTip;
}

@property(retain, nonatomic) UILabel *guideTip; // @synthesize guideTip=_guideTip;
@property(retain, nonatomic) UIImageView *bookMarkBgView; // @synthesize bookMarkBgView=_bookMarkBgView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

