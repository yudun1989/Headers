//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@interface MMImagePickerReportInfo : MMObject
{
    _Bool _isOriginalImage;
    _Bool _hasPreviewSelected;
    _Bool _hasOrderSelectedInPreviewAll;
    _Bool _hasClickSelectedInPreviewAll;
    _Bool _hasOrderSelectedInPreviewSelected;
    _Bool _hasClickSelectedInPreviewSelected;
    int _pickerScene;
    int _selectedPicCount;
    int _selectedGifCount;
    int _selectedVideoCount;
    long long _finalFinishScene;
}

@property(nonatomic) _Bool hasClickSelectedInPreviewSelected; // @synthesize hasClickSelectedInPreviewSelected=_hasClickSelectedInPreviewSelected;
@property(nonatomic) _Bool hasOrderSelectedInPreviewSelected; // @synthesize hasOrderSelectedInPreviewSelected=_hasOrderSelectedInPreviewSelected;
@property(nonatomic) _Bool hasClickSelectedInPreviewAll; // @synthesize hasClickSelectedInPreviewAll=_hasClickSelectedInPreviewAll;
@property(nonatomic) _Bool hasOrderSelectedInPreviewAll; // @synthesize hasOrderSelectedInPreviewAll=_hasOrderSelectedInPreviewAll;
@property(nonatomic) _Bool hasPreviewSelected; // @synthesize hasPreviewSelected=_hasPreviewSelected;
@property(nonatomic) _Bool isOriginalImage; // @synthesize isOriginalImage=_isOriginalImage;
@property(nonatomic) int selectedVideoCount; // @synthesize selectedVideoCount=_selectedVideoCount;
@property(nonatomic) int selectedGifCount; // @synthesize selectedGifCount=_selectedGifCount;
@property(nonatomic) int selectedPicCount; // @synthesize selectedPicCount=_selectedPicCount;
@property(nonatomic) long long finalFinishScene; // @synthesize finalFinishScene=_finalFinishScene;
@property(nonatomic) int pickerScene; // @synthesize pickerScene=_pickerScene;

@end

