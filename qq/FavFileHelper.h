//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FAModel, FileInfoModel, NSArray, PostURLConnection;
@protocol FavAddDelegate, FavFileDelegate;

@interface FavFileHelper : NSObject
{
    PostURLConnection *_connection;
    int _status;
    NSArray *_file_array;
    FileInfoModel *_model;
    FAModel *_fa_model;
    id <FavFileDelegate> _fav_file_delegate;
    id <FavAddDelegate> _fav_add_delegate;
    int _xo;
}

- (void).cxx_destruct;
- (void)didDownloadThumbnailDone:(id)arg1;
- (void)cancel;
- (void)callback:(int)arg1 errorType:(int)arg2;
- (void)didConnectionFailed:(id)arg1 Error:(id)arg2;
- (void)didConnectionFinished_OnlinePreviewRequest:(id)arg1;
- (void)didConnectionFinished_DownloadRequest:(id)arg1;
- (void)didConnectionFinished_FastUploadRequest:(id)arg1;
- (void)didConnectionFinished:(id)arg1;
- (_Bool)requestOnlinePreview:(id)arg1;
- (_Bool)getThumbnail:(id)arg1 size:(int)arg2;
- (_Bool)requestDownload:(id)arg1 isThumbnail:(_Bool)arg2;
- (_Bool)requestFastUpload:(id)arg1;
- (id)fav_file_info:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 favAddDelegate:(id)arg2;

// Remaining properties
@property(retain, nonatomic) FAModel *fa_model; // @dynamic fa_model;
@property(nonatomic) __weak id <FavAddDelegate> fav_add_delegate; // @dynamic fav_add_delegate;
@property(nonatomic) __weak id <FavFileDelegate> fav_file_delegate; // @dynamic fav_file_delegate;
@property(retain, nonatomic) NSArray *file_array; // @dynamic file_array;
@property(retain, nonatomic) FileInfoModel *model; // @dynamic model;

@end

