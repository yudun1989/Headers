//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MtopApiRequest, MtopApiRequestDelegateImpl;

@interface MtopRequestContainer : NSObject
{
    MtopApiRequest *_request;
    MtopApiRequestDelegateImpl *_delegate;
}

@property(retain, nonatomic) MtopApiRequestDelegateImpl *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MtopApiRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;

@end

