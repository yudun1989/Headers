//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NetReqDelegate;
@protocol HttpRequestDelegate;

@interface HttpRequest : NSObject
{
    NSString *_url;
    id <HttpRequestDelegate> _delegate;
    NSDictionary *_body;
    NetReqDelegate *_request;
}

@property(retain, nonatomic) NetReqDelegate *request; // @synthesize request=_request;
@property(retain, nonatomic) NSDictionary *body; // @synthesize body=_body;
@property(nonatomic) __weak id <HttpRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

