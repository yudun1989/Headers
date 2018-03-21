//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBBootImageBrandInfo, TBBootImageInfoItem;

@interface BootImagePopOperation : NSObject
{
    _Bool _isColdStart;
    _Bool _isShowing;
    TBBootImageInfoItem *_curBootImageItemData;
    TBBootImageBrandInfo *_brandInfo;
    unsigned long long _showStartTime;
    unsigned long long _loadStartTime;
    CDUnknownBlockType _hideBootImageCallback;
}

@property(copy, nonatomic) CDUnknownBlockType hideBootImageCallback; // @synthesize hideBootImageCallback=_hideBootImageCallback;
@property(nonatomic) unsigned long long loadStartTime; // @synthesize loadStartTime=_loadStartTime;
@property(nonatomic) unsigned long long showStartTime; // @synthesize showStartTime=_showStartTime;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool isColdStart; // @synthesize isColdStart=_isColdStart;
@property(retain, nonatomic) TBBootImageBrandInfo *brandInfo; // @synthesize brandInfo=_brandInfo;
@property(retain, nonatomic) TBBootImageInfoItem *curBootImageItemData; // @synthesize curBootImageItemData=_curBootImageItemData;
- (void).cxx_destruct;
- (void)commitUTDataOnFinish:(id)arg1;
- (id)getStatData;
- (void)hideBootImageView:(id)arg1;
- (_Bool)show;

@end

