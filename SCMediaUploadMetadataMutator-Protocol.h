//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, SCBoltContentObject;

@protocol SCMediaUploadMetadataMutator <NSObject>
- (void)addUploadMediaMetadataForMediaId:(NSString *)arg1 uploadState:(long long)arg2;
- (void)removeUploadMediaMetadataForMediaId:(NSString *)arg1;
- (void)updateUploadMediaMetadataForMediaId:(NSString *)arg1 uploadState:(long long)arg2 contentObject:(SCBoltContentObject *)arg3;
- (void)updateUploadMediaMetadataForMediaId:(NSString *)arg1 uploadState:(long long)arg2 dataToUpload:(NSData *)arg3;
@end

