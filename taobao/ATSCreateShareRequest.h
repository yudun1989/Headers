//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ATSBaseRequest.h"

@class NSArray;

@interface ATSCreateShareRequest : ATSBaseRequest
{
    NSArray *_boughtItems;
    NSArray *_cartsItems;
    NSArray *_favoriteItems;
}

@property(retain, nonatomic) NSArray *favoriteItems; // @synthesize favoriteItems=_favoriteItems;
@property(retain, nonatomic) NSArray *cartsItems; // @synthesize cartsItems=_cartsItems;
@property(retain, nonatomic) NSArray *boughtItems; // @synthesize boughtItems=_boughtItems;
- (void).cxx_destruct;
- (id)nextCommandId;

@end
