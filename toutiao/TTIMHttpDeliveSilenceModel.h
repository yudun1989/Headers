//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber;

@interface TTIMHttpDeliveSilenceModel : JSONModel
{
    NSNumber *_level;
    NSNumber *_duration;
}

@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSNumber *level; // @synthesize level=_level;
- (void).cxx_destruct;
- (id)transformToPBModel;

@end

