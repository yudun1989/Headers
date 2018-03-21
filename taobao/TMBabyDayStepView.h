//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CircleBackgroundView, CycleScrollView, NSDateFormatter, TMBabyAgeStepsModel, UIColor, UILabel;

@interface TMBabyDayStepView : UIView
{
    NSDateFormatter *_formatter;
    UIColor *_themeColor;
    TMBabyAgeStepsModel *_dayStepsModel;
    CycleScrollView *_stepSelecView;
    CircleBackgroundView *_circleBGView;
    UILabel *_currentDateLbl;
}

@property(nonatomic) __weak UILabel *currentDateLbl; // @synthesize currentDateLbl=_currentDateLbl;
@property(nonatomic) __weak CircleBackgroundView *circleBGView; // @synthesize circleBGView=_circleBGView;
@property(nonatomic) __weak CycleScrollView *stepSelecView; // @synthesize stepSelecView=_stepSelecView;
@property(nonatomic) __weak TMBabyAgeStepsModel *dayStepsModel; // @synthesize dayStepsModel=_dayStepsModel;
@property(nonatomic) __weak UIColor *themeColor; // @synthesize themeColor=_themeColor;
- (void).cxx_destruct;
- (void)selectToday;
- (void)addDelegate:(id)arg1;
- (void)setDateOnLabel:(id)arg1;
- (void)renderWithAgeStepsModel:(id)arg1 themeColor:(id)arg2;
- (void)buildSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

