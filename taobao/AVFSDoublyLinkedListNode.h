//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface AVFSDoublyLinkedListNode : NSObject
{
    AVFSDoublyLinkedListNode *_prev;
    AVFSDoublyLinkedListNode *_next;
    NSString *_key;
    id _value;
    unsigned long long _cost;
    double _time;
}

- (void).cxx_destruct;

@end

