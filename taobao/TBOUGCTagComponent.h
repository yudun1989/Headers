//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseUGCComponent.h"

@class TBOBaseTitleUGCComponent, TBOUGCTagItemView, UIScrollView;

@interface TBOUGCTagComponent : TBOBaseUGCComponent
{
    TBOBaseTitleUGCComponent *_titleView;
    UIScrollView *_contentView;
    TBOUGCTagItemView *_addTagView;
    unsigned long long _minNum;
    unsigned long long _maxNum;
}

+ (id)componentName;
@property(nonatomic) unsigned long long maxNum; // @synthesize maxNum=_maxNum;
@property(nonatomic) unsigned long long minNum; // @synthesize minNum=_minNum;
@property(retain, nonatomic) TBOUGCTagItemView *addTagView; // @synthesize addTagView=_addTagView;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) TBOBaseTitleUGCComponent *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)publish:(CDUnknownBlockType)arg1;
- (_Bool)isModify;
- (void)checkState;
- (void)addTags:(id)arg1;
- (id)createTagView:(id)arg1;
- (id)getAllTags:(_Bool)arg1;
- (_Bool)isValid;
- (void)applyData:(id)arg1;
- (void)applyStyle:(id)arg1;
- (id)defaultStyle;
- (id)initWithContext:(id)arg1 parent:(id)arg2;

@end

