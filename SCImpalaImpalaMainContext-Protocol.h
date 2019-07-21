//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@protocol SCCLensActionHandling, SCCStoryPlayerPlaying, SCCStoryPlayerStorySnapViewStateProviding, SCComposerFoundationApplicationProtocol, SCComposerFoundationTempFileProviding, SCComposerMediaImageFactoryProtocol, SCComposerMediaLibrary, SCComposerNetworkingBoltUploading, SCImpalaMainActionHandling, SCImpalaUrlActionHandling;

@protocol SCImpalaImpalaMainContext <NSObject, SCComposerJsConvertible>
@property(retain, nonatomic) id <SCImpalaMainActionHandling> actionHandler;
@property(retain, nonatomic) id <SCComposerFoundationApplicationProtocol> application;
@property(retain, nonatomic) id <SCComposerNetworkingBoltUploading> boltUploader;
@property(retain, nonatomic) id <SCComposerMediaLibrary> cameraRollLibrary;
@property(retain, nonatomic) id <SCComposerMediaImageFactoryProtocol> imageFactory;
@property(retain, nonatomic) id <SCCLensActionHandling> lensActionHandler;
@property(retain, nonatomic) id <SCCStoryPlayerStorySnapViewStateProviding> snapViewStateProvider;
@property(retain, nonatomic) id <SCCStoryPlayerPlaying> storyPlayer;
@property(retain, nonatomic) id <SCComposerFoundationTempFileProviding> tempFileProvider;
@property(retain, nonatomic) id <SCImpalaUrlActionHandling> urlActionHandler;
@end
