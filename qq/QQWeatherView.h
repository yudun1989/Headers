//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QQCityWeatherInfo, UILabel;

@interface QQWeatherView : UIView
{
    UILabel *_temperature;
    UILabel *_city;
    QQCityWeatherInfo *_info;
}

@property(retain, nonatomic) QQCityWeatherInfo *info; // @synthesize info=_info;
@property(readonly, nonatomic) UILabel *city; // @synthesize city=_city;
@property(readonly, nonatomic) UILabel *temperature; // @synthesize temperature=_temperature;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)init;

@end

