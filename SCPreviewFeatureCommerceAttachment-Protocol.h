//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol SCPreviewFeatureCommerceAttachmentAttachingDelegate, SCPreviewFeatureParentViewControllerAccessing;

@protocol SCPreviewFeatureCommerceAttachment
@property(nonatomic) __weak id <SCPreviewFeatureCommerceAttachmentAttachingDelegate> attachingDelegate;
- (void)clearAttachments;
- (_Bool)hasAttachment;
- (void)prepareStoreInfoWithCompletion:(void (^)(SOJUCommerceStoreInfo *))arg1;
- (void)presentAttachmentTool;
@property(nonatomic) __weak id <SCPreviewFeatureParentViewControllerAccessing> presentingDelegate;
- (_Bool)shouldShowStoreButton;
- (void)trackAttachmentPostedToStory:(_Bool)arg1 toGroup:(_Bool)arg2 toFriend:(_Bool)arg3;
@end

