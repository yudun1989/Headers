//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber;
@protocol Optional;

@interface FRUserBlockedAndBlockingStructModel : JSONModel
{
    NSNumber<Optional> *_is_blocking;
    NSNumber<Optional> *_is_blocked;
}

@property(retain, nonatomic) NSNumber<Optional> *is_blocked; // @synthesize is_blocked=_is_blocked;
@property(retain, nonatomic) NSNumber<Optional> *is_blocking; // @synthesize is_blocking=_is_blocking;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

