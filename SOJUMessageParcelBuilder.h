//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

@interface SOJUMessageParcelBuilder : NSObject
{
    NSString *_idValue;
    NSString *_type;
    NSString *_contents;
    NSData *_payloadDeprecated;
    NSArray *_media;
    NSString *_tag;
    NSString *_tagVersion;
}

+ (id)withJUMessageParcel:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setContents:(id)arg1;
- (id)setIdValue:(id)arg1;
- (id)setMedia:(id)arg1;
- (id)setPayloadDeprecated:(id)arg1;
- (id)setTag:(id)arg1;
- (id)setTagVersion:(id)arg1;
- (id)setType:(id)arg1;

@end

