//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSDictionary;
@protocol AliDetailInputViewModel, AliDetailSkuPropPathModel, AliDetailSkuPropsAddedInfoModel, AliDetailSkuPropsModel;

@interface AliDetailSkuBaseModel : TBJSONModel
{
    _Bool _usePicAsProperty;
    NSArray<AliDetailSkuPropsModel> *_props;
    NSDictionary<AliDetailSkuPropsAddedInfoModel> *_propAddedInfo;
    NSArray<AliDetailSkuPropPathModel> *_skus;
    NSArray<AliDetailInputViewModel> *_components;
}

@property(retain, nonatomic) NSArray<AliDetailInputViewModel> *components; // @synthesize components=_components;
@property(retain, nonatomic) NSArray<AliDetailSkuPropPathModel> *skus; // @synthesize skus=_skus;
@property(retain, nonatomic) NSDictionary<AliDetailSkuPropsAddedInfoModel> *propAddedInfo; // @synthesize propAddedInfo=_propAddedInfo;
@property(retain, nonatomic) NSArray<AliDetailSkuPropsModel> *props; // @synthesize props=_props;
@property(nonatomic) _Bool usePicAsProperty; // @synthesize usePicAsProperty=_usePicAsProperty;
- (void).cxx_destruct;

@end

