//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EWBaseViewModel.h"

@class EWCityViewModel, NSMutableArray;

@interface EWCityModuleVM : EWBaseViewModel
{
    NSMutableArray *_allCityList;
    NSMutableArray *_hotCityList;
    EWCityViewModel *_selectedCity;
    EWCityViewModel *_locationCity;
}

@property(retain, nonatomic) EWCityViewModel *locationCity; // @synthesize locationCity=_locationCity;
@property(retain, nonatomic) EWCityViewModel *selectedCity; // @synthesize selectedCity=_selectedCity;
@property(retain, nonatomic) NSMutableArray *hotCityList; // @synthesize hotCityList=_hotCityList;
@property(retain, nonatomic) NSMutableArray *allCityList; // @synthesize allCityList=_allCityList;
- (void).cxx_destruct;
- (id)cityName;
- (id)init;

@end

