//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

#import "TTResponseModelProtocol-Protocol.h"

@class NSDictionary, NSString;
@protocol Optional;

@interface TTBlockUserListResponseModel : JSONModel <TTResponseModelProtocol>
{
    NSString<Optional> *_message;
    NSDictionary<Optional> *_data;
}

@property(retain, nonatomic) NSDictionary<Optional> *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString<Optional> *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

