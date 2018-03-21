//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ComicInfoModel, ComicSectionModel, ComicSectionPicInfoModel, NSString;

@interface QQVIPFunctionReaderModel : NSObject
{
    NSString *_sectionID;
    NSString *_sectionName;
    ComicSectionPicInfoModel *_picInfoModel;
    ComicInfoModel *_comicModel;
    ComicSectionModel *_sectionModel;
    int _xo;
    long long _pageIndex;
    long long _totalPage;
    double _alpha;
    unsigned long long _permissionType;
}

@property unsigned long long permissionType; // @synthesize permissionType=_permissionType;
@property double alpha; // @synthesize alpha=_alpha;
@property long long totalPage; // @synthesize totalPage=_totalPage;
@property long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (id)description;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) ComicInfoModel *comicModel; // @dynamic comicModel;
@property(retain, nonatomic) ComicSectionPicInfoModel *picInfoModel; // @dynamic picInfoModel;
@property(retain, nonatomic) NSString *sectionID; // @dynamic sectionID;
@property(retain, nonatomic) ComicSectionModel *sectionModel; // @dynamic sectionModel;
@property(retain, nonatomic) NSString *sectionName; // @dynamic sectionName;

@end

