//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIImageView;
@protocol TBHCElevatorHeaderScrollViewSingleViewDelegate;

@interface TBHCElevatorHeaderScrollViewSingleView : UIView
{
    UIImageView *_locationImageView;
    _Bool _checked;
    NSString *_displaynName;
    id <TBHCElevatorHeaderScrollViewSingleViewDelegate> _delegate;
    UIColor *_cellNormalColor;
    UIColor *_cellHighlightedColor;
    UIColor *_cellBackgroundColor;
}

@property(retain, nonatomic) UIColor *cellBackgroundColor; // @synthesize cellBackgroundColor=_cellBackgroundColor;
@property(retain, nonatomic) UIColor *cellHighlightedColor; // @synthesize cellHighlightedColor=_cellHighlightedColor;
@property(retain, nonatomic) UIColor *cellNormalColor; // @synthesize cellNormalColor=_cellNormalColor;
@property(nonatomic) __weak id <TBHCElevatorHeaderScrollViewSingleViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(retain, nonatomic) NSString *displaynName; // @synthesize displaynName=_displaynName;
- (void).cxx_destruct;
- (void)singleViewClicked:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)textSize;
- (double)viewWidth;
- (id)initWithFrame:(struct CGRect)arg1;

@end

