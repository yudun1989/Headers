//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKPOIAnnotaion.h"

@class MBKRedStopPointAnnotationView, NSMutableDictionary;

@interface MBKRedStopPointAnnotation : MBKPOIAnnotaion
{
    _Bool _isAutoClicked;
    MBKRedStopPointAnnotationView *_view;
    unsigned long long _uerDidInParkingState;
    NSMutableDictionary *_paramsDictionary;
}

@property(retain, nonatomic) NSMutableDictionary *paramsDictionary; // @synthesize paramsDictionary=_paramsDictionary;
@property(nonatomic) unsigned long long uerDidInParkingState; // @synthesize uerDidInParkingState=_uerDidInParkingState;
@property(nonatomic) _Bool isAutoClicked; // @synthesize isAutoClicked=_isAutoClicked;
@property(nonatomic) __weak MBKRedStopPointAnnotationView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)initWith:(id)arg1;

@end

