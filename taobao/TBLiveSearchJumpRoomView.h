//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageGIFView, UIImageView, UILabel;

@interface TBLiveSearchJumpRoomView : UIView
{
    NSString *_nativeLiveUrl;
    UIImageView *_shadowView;
    UIImageGIFView *_gifView;
    UILabel *_descLabel;
    UIButton *_cancelButton;
}

@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageGIFView *gifView; // @synthesize gifView=_gifView;
@property(retain, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
- (void).cxx_destruct;
- (void)didTapView:(id)arg1;
- (void)jumpToLiveNum;
- (void)delayJumpToLiveNum;
- (void)cancelJumpToLiveRoom;
- (void)refreshWithRoomNum:(id)arg1 nativeLiveUrl:(id)arg2;
- (void)setupSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

