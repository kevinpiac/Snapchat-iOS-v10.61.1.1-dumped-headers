//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGalleryEGOCipherKeyProviderListener-Protocol.h"

@class NSString;

@interface SCGalleryEGOCipherKeyProviderListenerAnnouncer : NSObject <SCGalleryEGOCipherKeyProviderListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCGalleryEGOCipherKeyProviderListener>, std::__1::allocator<__weak id<SCGalleryEGOCipherKeyProviderListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)EGOCipherKeyProviderHasMasterKeyAvailable:(id)arg1 derivedKey:(id)arg2 nonDerivedKey:(id)arg3;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

