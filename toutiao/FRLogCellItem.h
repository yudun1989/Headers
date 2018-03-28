//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FRLogEntity, NSString, UIColor;

@interface FRLogCellItem : NSObject
{
    FRLogEntity *_metaData;
    NSString *_title;
    NSString *_summary;
    UIColor *_titleColor;
    double _height;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) FRLogEntity *metaData; // @synthesize metaData=_metaData;
- (void).cxx_destruct;
- (id)initWithEntity:(id)arg1;

@end

