//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SOJUMediaSaveBuilder : NSObject
{
    NSString *_savedMessageSenderId;
    NSString *_savedMessageId;
    NSDictionary *_mediaTypeSavedCount;
    NSString *_destination;
}

+ (id)withJUMediaSave:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setDestination:(id)arg1;
- (id)setDestinationEnum:(long long)arg1;
- (id)setMediaTypeSavedCount:(id)arg1;
- (id)setSavedMessageId:(id)arg1;
- (id)setSavedMessageSenderId:(id)arg1;

@end

