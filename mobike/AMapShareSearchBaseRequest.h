//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSArray, NSString;

@interface AMapShareSearchBaseRequest : AMapSearchObject
{
    NSArray *_viaCoordinates;
    NSArray *_viaNames;
}

@property(retain, nonatomic) NSArray *viaNames; // @synthesize viaNames=_viaNames;
@property(retain, nonatomic) NSArray *viaCoordinates; // @synthesize viaCoordinates=_viaCoordinates;
- (void).cxx_destruct;
- (id)transferAddress;
@property(readonly, nonatomic) NSString *transferBaseURL;

@end

