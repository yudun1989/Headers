//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponent.h"

@class AliDetailMultiStageComponentModel, NSMutableArray;

@interface AliDetailMultiStageComponent : AliDetailComponent
{
    AliDetailMultiStageComponentModel *_model;
    NSMutableArray *_labels;
    NSMutableArray *_icons;
    NSMutableArray *_lines;
}

+ (double)componentHeightForObj:(id)arg1 preferredWidth:(double)arg2;
@property(retain, nonatomic) NSMutableArray *lines; // @synthesize lines=_lines;
@property(retain, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSMutableArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) AliDetailMultiStageComponentModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)removeArrayObjects;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;

@end

