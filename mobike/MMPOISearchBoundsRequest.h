//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPOISearchBaseRequest.h"

@interface MMPOISearchBoundsRequest : MMPOISearchBaseRequest
{
    struct CLLocationCoordinate2D _leftTopCoordinate;
    struct CLLocationCoordinate2D _rightBottomCoordinate;
}

@property(nonatomic) struct CLLocationCoordinate2D rightBottomCoordinate; // @synthesize rightBottomCoordinate=_rightBottomCoordinate;
@property(nonatomic) struct CLLocationCoordinate2D leftTopCoordinate; // @synthesize leftTopCoordinate=_leftTopCoordinate;

@end

