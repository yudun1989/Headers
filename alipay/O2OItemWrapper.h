//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface O2OItemWrapper : NSObject
{
    _Bool _show;
    _Bool _isSectionHeader;
    id _object;
    NSString *_blockId;
    long long _groupType;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) _Bool isSectionHeader; // @synthesize isSectionHeader=_isSectionHeader;
@property(nonatomic) long long groupType; // @synthesize groupType=_groupType;
@property(retain, nonatomic) NSString *blockId; // @synthesize blockId=_blockId;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)hiddenLoadingItem;
- (void)hiddenInvalidItem;
- (void)showFinishItem;
- (_Bool)isShow;
- (id)initWithItem:(id)arg1 blockId:(id)arg2 dataGroup:(long long)arg3;

@end

