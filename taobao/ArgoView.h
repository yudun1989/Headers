//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString;
@protocol ArgoViewDelegate;

@interface ArgoView : UIView
{
    double _modalThreshold;
    NSString *_alphaMode;
    NSMutableArray *_cutAreas;
    NSMutableArray *_antiCutAreas;
    id <ArgoViewDelegate> _delegate;
    double _scale;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) __weak id <ArgoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *antiCutAreas; // @synthesize antiCutAreas=_antiCutAreas;
@property(retain, nonatomic) NSMutableArray *cutAreas; // @synthesize cutAreas=_cutAreas;
@property(retain, nonatomic) NSString *alphaMode; // @synthesize alphaMode=_alphaMode;
@property(nonatomic) double modalThreshold; // @synthesize modalThreshold=_modalThreshold;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)getAlphaFromImage:(id)arg1 atX:(int)arg2 andY:(int)arg3;
- (id)getViewScreenShot;
- (double)alphaOfPointFromViewScreenShot:(struct CGPoint)arg1;
- (double)alphaOfPointFromLayer:(struct CGPoint)arg1;
- (double)alphaOfPoint:(struct CGPoint)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setup;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

