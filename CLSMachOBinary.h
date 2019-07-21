//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSURL;

@interface CLSMachOBinary : NSObject
{
    NSURL *_url;
    struct CLSMachOFile _file;
    NSMutableArray *_slices;
    NSString *_instanceIdentifier;
}

+ (id)MachOBinaryWithPath:(id)arg1;
+ (id)hashNSString:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *URL;
- (void)dealloc;
- (void)enumerateUUIDs:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1;
@property(readonly, copy, nonatomic) NSString *instanceIdentifier;
@property(readonly, copy, nonatomic) NSString *path;
- (id)sliceForArchitecture:(id)arg1;
@property(readonly, nonatomic) NSArray *slices; // @synthesize slices=_slices;

@end

