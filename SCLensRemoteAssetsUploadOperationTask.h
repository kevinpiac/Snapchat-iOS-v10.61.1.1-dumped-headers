//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSData, NSString;

@interface SCLensRemoteAssetsUploadOperationTask : NSObject <NSCoding>
{
    _Bool _deleteAfterUploading;
    unsigned long long _state;
    NSString *_assetId;
    NSString *_assetPath;
    NSData *_encryptionKey;
    NSData *_encryptionIv;
    NSString *_assetBatchId;
    NSString *_effectId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *assetBatchId; // @synthesize assetBatchId=_assetBatchId;
@property(readonly, nonatomic) NSString *assetId; // @synthesize assetId=_assetId;
@property(readonly, nonatomic) NSString *assetPath; // @synthesize assetPath=_assetPath;
@property(readonly, nonatomic) _Bool deleteAfterUploading; // @synthesize deleteAfterUploading=_deleteAfterUploading;
@property(readonly, nonatomic) NSString *effectId; // @synthesize effectId=_effectId;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSData *encryptionIv; // @synthesize encryptionIv=_encryptionIv;
@property(readonly, nonatomic) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
- (unsigned long long)hash;
- (id)initAssetWithAssetId:(id)arg1 assetPath:(id)arg2 encryptionKey:(id)arg3 encryptionIv:(id)arg4 assetBatchId:(id)arg5 effectId:(id)arg6 deleteAfterUploading:(_Bool)arg7;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;

@end

