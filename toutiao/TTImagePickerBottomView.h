//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface TTImagePickerBottomView : UIView
{
    UILabel *previewLabel;
    UIView *previewTouch;
    int seletedCount;
    _Bool _isSeletedImg;
    CDUnknownBlockType _previewAction;
}

@property(nonatomic) _Bool isSeletedImg; // @synthesize isSeletedImg=_isSeletedImg;
@property(copy, nonatomic) CDUnknownBlockType previewAction; // @synthesize previewAction=_previewAction;
- (void).cxx_destruct;
- (void)dealloc;
- (void)selectedCountDidChange:(id)arg1;
- (void)previewTapAction;
- (void)_initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

