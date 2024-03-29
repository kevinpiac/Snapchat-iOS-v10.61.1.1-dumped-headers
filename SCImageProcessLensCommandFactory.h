//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSString;

@interface SCImageProcessLensCommandFactory : NSObject <SCTraceEnabled>
{
}

+ (id)_worldLensProcessingCommandWithLens:(id)arg1 componentManagerPool:(id)arg2 metadata:(id)arg3;
+ (id)bundledLensProvider;
+ (void)clearSharedResources;
+ (id)effectDescriptorContainerFromLens:(id)arg1;
+ (id)effectDescriptorContainerFromLens:(id)arg1 metadata:(id)arg2;
+ (id)exportCommandWithLensCommand:(id)arg1;
+ (id)imageDepthDisplayLensCommandWithLens:(id)arg1 metadata:(id)arg2 remoteAssetsProvider:(id)arg3 uriServiceProvider:(id)arg4 isExportMode:(_Bool)arg5;
+ (id)imageLensProcessingCommandWithEffectDescriptorContainer:(id)arg1 componentManagerPool:(id)arg2 metadata:(id)arg3;
+ (id)imageLensProcessingCommandWithLens:(id)arg1 componentManagerPool:(id)arg2 metadata:(id)arg3;
+ (id)lensLogger;
+ (void)setLensLogger:(id)arg1;
+ (void)setSharedComponentManagerPool:(id)arg1;
+ (id)sharedComponentManagerPool;
+ (id)sharedSmoothingCommand;
+ (id)videoLensProcessingCommandWithEffectDescriptorContainer:(id)arg1 componentManagerPool:(id)arg2 metadata:(id)arg3;
+ (id)videoLensProcessingCommandWithLens:(id)arg1 componentManagerPool:(id)arg2 metadata:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

