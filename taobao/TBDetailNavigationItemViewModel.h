//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBMagicCubeComponentMeta.h"

@class NSArray, NSString;
@protocol TBMagicCubeActionMeta;

@interface TBDetailNavigationItemViewModel : TBMagicCubeComponentMeta
{
    _Bool _isDetailHome;
    unsigned long long _itemType;
    NSString *_value;
    double _bgAlpha;
    NSArray<TBMagicCubeActionMeta> *_secondActions;
    NSString *_bgColor;
    NSString *_fgColor1;
    NSString *_fgColor2;
}

@property(retain, nonatomic) NSString *fgColor2; // @synthesize fgColor2=_fgColor2;
@property(retain, nonatomic) NSString *fgColor1; // @synthesize fgColor1=_fgColor1;
@property(retain, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) NSArray<TBMagicCubeActionMeta> *secondActions; // @synthesize secondActions=_secondActions;
@property(nonatomic) _Bool isDetailHome; // @synthesize isDetailHome=_isDetailHome;
@property(nonatomic) double bgAlpha; // @synthesize bgAlpha=_bgAlpha;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;
- (void)configColors;
- (id)initWithJSONDictionary:(id)arg1;

@end

