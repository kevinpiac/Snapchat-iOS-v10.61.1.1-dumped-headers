//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNContentManagerContentManager : NSObject
{
    struct Handle<std::__1::shared_ptr<snap::content_manager::ContentManager>, std::__1::shared_ptr<snap::content_manager::ContentManager>> _cppRefHandle;
}

+ (id)create:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)appStateChanged:(long long)arg1;
- (id)associateRequest:(id)arg1 context:(id)arg2 completePrefetch:(_Bool)arg3 connectivity:(long long)arg4 callback:(id)arg5;
- (void)cancelContentCallback:(id)arg1;
- (void)defineBoltNetworkRulesProvider:(id)arg1;
- (void)defineBoltResolver:(id)arg1;
- (void)defineMossRankedMediaVariantsProvider:(id)arg1;
- (void)defineTransformBehavior:(long long)arg1 callback:(id)arg2;
- (void)dissociateRequest:(id)arg1;
- (id)getCacheMetrics;
- (id)getDiskSizeInBytes;
- (void)handleEmergencyDiskCondition:(id)arg1;
- (id)initWithCpp:(const shared_ptr_7dbdcd2d *)arg1;
- (void)performCleanUpAfterUserLogout:(id)arg1;
- (long long)queryContentStatus:(id)arg1;
- (void)queryContentStatusAsync:(id)arg1 callback:(id)arg2;
- (void)registerContentObject:(id)arg1 serializedContentObject:(id)arg2 mediaType:(long long)arg3 encryptionKey:(id)arg4 encryptionIv:(id)arg5 isEligibleForStreaming:(_Bool)arg6 callback:(id)arg7;
- (void)registerDerivedContent:(id)arg1 params:(id)arg2 inputs:(id)arg3 mediaType:(long long)arg4 callback:(id)arg5;
- (void)registerLocalContent:(id)arg1 expirationDate:(long long)arg2 readStream:(id)arg3 isAuthoritative:(_Bool)arg4 callback:(id)arg5;
- (void)registerNonBoltContent:(id)arg1 encryptionKey:(id)arg2 encryptionIv:(id)arg3 expirationDate:(long long)arg4 urlRequest:(id)arg5 isEligibleForStreaming:(_Bool)arg6 callback:(id)arg7;
- (void)releaseAuthoritativeLocalContent:(id)arg1 callback:(id)arg2;
- (void)removeAllContentsForContextType:(long long)arg1 callback:(id)arg2;
- (void)removeContents:(id)arg1 callback:(id)arg2;
- (void)removeExpiredContent:(id)arg1;
- (id)retrieveContent:(id)arg1 featureType:(long long)arg2 pageInfo:(id)arg3 callback:(id)arg4;

@end

