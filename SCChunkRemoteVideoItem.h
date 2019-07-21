//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCChunkItem.h"

#import "MediaDataSource-Protocol.h"

@class Media, NSData, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

@interface SCChunkRemoteVideoItem : SCChunkItem <MediaDataSource>
{
    NSData *_firstFrameDataToSave;
    _Bool _videoRotationEnabled;
    _Bool _shouldInjectBitmojiAvatarId;
    _Bool _hasFirstFrameMedia;
    NSString *_videoId;
    Media *_videoFirstFrameMedia;
    NSDictionary *_remoteURLToRelativePath;
    NSMutableDictionary *_videoProgress;
    NSMutableSet *_finishedVideoIndexes;
    NSString *_chunkHash;
}

- (void).cxx_destruct;
- (id)cacheDirectoryURL;
- (id)cacheMediaIds;
@property(copy, nonatomic) NSString *chunkHash; // @synthesize chunkHash=_chunkHash;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
- (void)didDecodeObject;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)encrypt;
- (id)encryptionDictionaryForMedia:(id)arg1;
@property(retain, nonatomic) NSMutableSet *finishedVideoIndexes; // @synthesize finishedVideoIndexes=_finishedVideoIndexes;
@property(nonatomic) _Bool hasFirstFrameMedia; // @synthesize hasFirstFrameMedia=_hasFirstFrameMedia;
- (_Bool)imageMediaExistsInCache;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 chunkDictionary:(id)arg2;
- (id)initWithVideoId:(id)arg1;
- (id)mediaIdForMedia:(id)arg1;
- (_Bool)needsAuthToFetch;
- (_Bool)persist;
@property(readonly, copy, nonatomic) NSDictionary *remoteURLToRelativePath; // @synthesize remoteURLToRelativePath=_remoteURLToRelativePath;
- (id)requestContexts;
- (void)saveMediaToCache;
@property(retain, nonatomic) Media *videoFirstFrameMedia; // @synthesize videoFirstFrameMedia=_videoFirstFrameMedia;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) NSMutableDictionary *videoProgress; // @synthesize videoProgress=_videoProgress;
@property(readonly, nonatomic) _Bool shouldInjectBitmojiAvatarId; // @synthesize shouldInjectBitmojiAvatarId=_shouldInjectBitmojiAvatarId;
@property(readonly, nonatomic) _Bool videoRotationEnabled; // @synthesize videoRotationEnabled=_videoRotationEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

