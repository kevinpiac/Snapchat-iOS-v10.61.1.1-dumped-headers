//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNMessagingUploadCallback : NSObject
{
    struct Handle<std::__1::shared_ptr<snap::messaging::UploadCallback>, std::__1::shared_ptr<snap::messaging::UploadCallback>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCpp:(const shared_ptr_7587cc48 *)arg1;
- (void)onUploadFinished:(id)arg1 localMessageContent:(id)arg2;

@end

