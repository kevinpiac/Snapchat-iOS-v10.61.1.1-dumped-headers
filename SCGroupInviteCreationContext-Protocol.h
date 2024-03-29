//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class SCGroupInviteDetails;
@protocol SCComposerFoundationApplicationProtocol, SCGroupStickerFontProvider;

@protocol SCGroupInviteCreationContext <NSObject, SCComposerJsConvertible>
- (void)didCancelInviteCreation;
- (void)didSelectInviteWithInvite:(SCGroupInviteDetails *)arg1;

@optional
- (void)fetchExistingInvitesThatCanBeSelectedWithCallback:(void (^)(NSArray *))arg1;
- (id <SCComposerFoundationApplicationProtocol>)getApplication;
- (id <SCGroupStickerFontProvider>)getFontProvider;
@end

