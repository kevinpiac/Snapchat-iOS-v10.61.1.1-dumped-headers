//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCChunkItem.h"

#import "MediaDataSource-Protocol.h"

@class Media, NSData, NSString;

@interface SCChunkOverlayItem : SCChunkItem <MediaDataSource>
{
    NSData *_overlayDataToSave;
    _Bool _sponsored;
    Media *_media;
    unsigned long long _docking;
    unsigned long long _zIndex;
    NSString *_chunkHash;
}

- (void).cxx_destruct;
- (id)cacheMediaIds;
@property(copy, nonatomic) NSString *chunkHash; // @synthesize chunkHash=_chunkHash;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
- (void)didDecodeObject;
@property(nonatomic) unsigned long long docking; // @synthesize docking=_docking;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)encrypt;
- (id)encryptionDictionaryForMedia:(id)arg1;
- (void)ensureNonNilMediaObjects;
- (_Bool)imageMediaExistsInCache;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 docking:(unsigned long long)arg2 sponsored:(_Bool)arg3;
- (id)initWithJSONDictionary:(id)arg1 chunkDictionary:(id)arg2;
@property(retain, nonatomic) Media *media; // @synthesize media=_media;
- (id)mediaIdForMedia:(id)arg1;
- (_Bool)needsAuthToFetch;
- (_Bool)persist;
- (id)requestContexts;
- (void)saveMediaToCache;
@property(nonatomic) _Bool sponsored; // @synthesize sponsored=_sponsored;
@property(nonatomic) unsigned long long zIndex; // @synthesize zIndex=_zIndex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

