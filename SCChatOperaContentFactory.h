//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCChatOperaContentFactory : NSObject
{
}

+ (id)chatMapSnapOperaContentForMessage:(id)arg1 storySnapId:(id)arg2 pointOfInterestId:(id)arg3 media:(id)arg4 mediaMetadata:(id)arg5;
+ (id)chatMediaOperaContentsForMessage:(id)arg1 messageMetadata:(id)arg2;
+ (id)chatSearchSnapShareOperaContentForMessage:(id)arg1 snapId:(id)arg2 dynamicStoryId:(id)arg3 media:(id)arg4 mediaMetadata:(id)arg5;
+ (id)chatStorySnapShareOperaContentForMessage:(id)arg1 media:(id)arg2 mediaMetadata:(id)arg3;
+ (id)snapOperaContentForMessage:(id)arg1 messageMetadata:(id)arg2;

@end

