//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol FAListMgrDelegate;

@interface FAListMgrBase : NSObject
{
    id <FAListMgrDelegate> _delegate;
}

- (id)getRecentCategoryData:(id)arg1 filter:(CDUnknownBlockType)arg2;
- (_Bool)isKindOfType:(int)arg1 model:(id)arg2;
- (_Bool)isKindOfType:(int)arg1 fileName:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

