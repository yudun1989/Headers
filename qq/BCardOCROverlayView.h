//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface BCardOCROverlayView : UIView
{
    UIImageView *_lineImageView;
    struct CGRect _scanRect;
    struct CGRect _lineRectTop;
    struct CGRect _lineRectBottom;
}

@property(retain, nonatomic) UIImageView *lineImageView; // @synthesize lineImageView=_lineImageView;
@property(nonatomic) struct CGRect lineRectBottom; // @synthesize lineRectBottom=_lineRectBottom;
@property(nonatomic) struct CGRect lineRectTop; // @synthesize lineRectTop=_lineRectTop;
@property(nonatomic) struct CGRect scanRect; // @synthesize scanRect=_scanRect;

@end

